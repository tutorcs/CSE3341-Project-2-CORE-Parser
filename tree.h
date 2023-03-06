https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef TREE_H
#define TREE_H

struct nodeProcedure {
    struct nodeDeclSeq* ds;
    struct nodeStmtSeq* ss;
    char* name;
};

struct nodeDeclSeq {
    struct nodeDecl* d;
    struct nodeDeclSeq* ds;
	int type;
};

struct nodeDecl {
    struct nodeDeclInt* di;
    struct nodeDeclRec* dr;
	int type;
};

struct nodeDeclInt {
    char* name;
};

struct nodeDeclRec {
    char* name;
};

struct nodeStmtSeq {
    struct nodeStmt* s;
    struct nodeStmtSeq* ss;
	int more;
};

struct nodeStmt {
    struct nodeAssign* assign;
    struct nodeIf* ifStmt;
    struct nodeLoop* loop;
    struct nodeOut* out;
	int type;
};

struct nodeAssign {
    char* lhs;
    struct nodeIndex* index;
    struct nodeExpr* expr;
    char* rhs;
    int type;
};

struct nodeIndex {
    struct nodeExpr* expr;
};

struct nodeOut {
    struct nodeExpr* expr;
};

struct nodeIf {
    struct nodeCond* cond;
    struct nodeStmtSeq* ss1;
    struct nodeStmtSeq* ss2;
	int type;
};

struct nodeLoop {
    struct nodeCond* cond;
    struct nodeStmtSeq* ss;
};

struct nodeCond {
    struct nodeCmpr* cmpr;
    struct nodeCond* cond;
    int type;
};

struct nodeCmpr {
    struct nodeExpr* expr1;
    struct nodeExpr* expr2;
    int type;
};

struct nodeExpr {
    struct nodeExpr* expr;
    struct nodeTerm* term;
    int type;
};

struct nodeTerm {
    struct nodeTerm* term;
    struct nodeFactor* factor;
    int type;
};

struct nodeFactor {
    int constant;
    char* id;
    struct nodeExpr* expr;
    int type;
};

#endif