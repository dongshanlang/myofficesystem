
#ifndef MYORACLE_H_
#define MYORACLE_H_

int sql_connect(const char *User, const char *Password, const char *DBName);
int sql_disconnect();
int query_result(const char *name, char **buf);
int sql_insert_exec(const char *DySQL);
int sql_commit();//提交事务

#endif /* MYORACLE_H_ */
