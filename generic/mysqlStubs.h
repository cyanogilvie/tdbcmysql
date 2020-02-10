/*
 *-----------------------------------------------------------------------------
 *
 * ../generic/mysqlStubs.h --
 *
 *	Stubs for procedures in mysqlStubDefs.txt
 *
 * Generated by genExtStubs.tcl: DO NOT EDIT
 * 2017-05-26 05:57:32Z
 *
 *-----------------------------------------------------------------------------
 */

typedef struct mysqlStubDefs {

    /* Functions from libraries: mysqlclient_r mysqlclient mysql */

    int (STDCALL*mysql_server_initPtr)(int, char**, char**);
    void (STDCALL*mysql_server_endPtr)(void);
    my_ulonglong (STDCALL*mysql_affected_rowsPtr)(MYSQL*);
    my_bool (STDCALL*mysql_autocommitPtr)(MYSQL*, my_bool);
    my_bool (STDCALL*mysql_change_userPtr)(MYSQL*, const char*, const char*, const char*);
    my_bool (STDCALL*mysql_closePtr)(MYSQL*);
    my_bool (STDCALL*mysql_commitPtr)(MYSQL*);
    unsigned int (STDCALL*mysql_errnoPtr)(MYSQL*);
    const char* (STDCALL*mysql_errorPtr)(MYSQL*);
    MYSQL_FIELD* (STDCALL*mysql_fetch_fieldsPtr)(MYSQL_RES*);
    unsigned long* (STDCALL*mysql_fetch_lengthsPtr)(MYSQL_RES*);
    MYSQL_ROW (STDCALL*mysql_fetch_rowPtr)(MYSQL_RES*);
    unsigned int (STDCALL*mysql_field_countPtr)(MYSQL*);
    void (STDCALL*mysql_free_resultPtr)(MYSQL_RES*);
    unsigned long (STDCALL*mysql_get_client_versionPtr)(void);
    MYSQL* (STDCALL*mysql_initPtr)(MYSQL*);
    MYSQL_RES* (STDCALL*mysql_list_fieldsPtr)(MYSQL*, const char*, const char*);
    MYSQL_RES* (STDCALL*mysql_list_tablesPtr)(MYSQL*, const char*);
    unsigned int (STDCALL*mysql_num_fieldsPtr)(MYSQL_RES*);
    int (STDCALL*mysql_optionsPtr)(MYSQL*, enum mysql_option, const void*);
    int (STDCALL*mysql_queryPtr)(MYSQL*, const char*);
    MYSQL* (STDCALL*mysql_real_connectPtr)(MYSQL*, const char*, const char*, const char*, const char*, unsigned int, const char*, unsigned long);
    my_bool (STDCALL*mysql_rollbackPtr)(MYSQL*);
    int (STDCALL*mysql_select_dbPtr)(MYSQL*, const char*);
    const char* (STDCALL*mysql_sqlstatePtr)(MYSQL*);
    my_bool (STDCALL*mysql_ssl_setPtr)(MYSQL*, const char*, const char*, const char*, const char*, const char*);
    my_ulonglong (STDCALL*mysql_stmt_affected_rowsPtr)(MYSQL_STMT*);
    my_bool (STDCALL*mysql_stmt_bind_paramPtr)(MYSQL_STMT*, MYSQL_BIND*);
    my_bool (STDCALL*mysql_stmt_bind_resultPtr)(MYSQL_STMT*, MYSQL_BIND*);
    my_bool (STDCALL*mysql_stmt_closePtr)(MYSQL_STMT*);
    unsigned int (STDCALL*mysql_stmt_errnoPtr)(MYSQL_STMT*);
    const char* (STDCALL*mysql_stmt_errorPtr)(MYSQL_STMT*);
    int (STDCALL*mysql_stmt_executePtr)(MYSQL_STMT*);
    int (STDCALL*mysql_stmt_fetchPtr)(MYSQL_STMT*);
    int (STDCALL*mysql_stmt_fetch_columnPtr)(MYSQL_STMT*, MYSQL_BIND*, unsigned int, unsigned long);
    MYSQL_STMT* (STDCALL*mysql_stmt_initPtr)(MYSQL*);
    int (STDCALL*mysql_stmt_preparePtr)(MYSQL_STMT*, const char*, unsigned long);
    MYSQL_RES* (STDCALL*mysql_stmt_result_metadataPtr)(MYSQL_STMT*);
    const char* (STDCALL*mysql_stmt_sqlstatePtr)(MYSQL_STMT*);
    int (STDCALL*mysql_stmt_store_resultPtr)(MYSQL_STMT*);
    MYSQL_RES* (STDCALL*mysql_store_resultPtr)(MYSQL*);
    int (STDCALL*mysql_pingPtr)(MYSQL*);
} mysqlStubDefs;
#define mysql_server_init (mysqlStubs->mysql_server_initPtr)
#define mysql_server_end (mysqlStubs->mysql_server_endPtr)
#define mysql_affected_rows (mysqlStubs->mysql_affected_rowsPtr)
#define mysql_autocommit (mysqlStubs->mysql_autocommitPtr)
#define mysql_change_user (mysqlStubs->mysql_change_userPtr)
#define mysql_close (mysqlStubs->mysql_closePtr)
#define mysql_commit (mysqlStubs->mysql_commitPtr)
#define mysql_errno (mysqlStubs->mysql_errnoPtr)
#define mysql_error (mysqlStubs->mysql_errorPtr)
#define mysql_fetch_fields (mysqlStubs->mysql_fetch_fieldsPtr)
#define mysql_fetch_lengths (mysqlStubs->mysql_fetch_lengthsPtr)
#define mysql_fetch_row (mysqlStubs->mysql_fetch_rowPtr)
#define mysql_field_count (mysqlStubs->mysql_field_countPtr)
#define mysql_free_result (mysqlStubs->mysql_free_resultPtr)
#define mysql_get_client_version (mysqlStubs->mysql_get_client_versionPtr)
#define mysql_init (mysqlStubs->mysql_initPtr)
#define mysql_list_fields (mysqlStubs->mysql_list_fieldsPtr)
#define mysql_list_tables (mysqlStubs->mysql_list_tablesPtr)
#define mysql_num_fields (mysqlStubs->mysql_num_fieldsPtr)
#define mysql_options (mysqlStubs->mysql_optionsPtr)
#define mysql_query (mysqlStubs->mysql_queryPtr)
#define mysql_real_connect (mysqlStubs->mysql_real_connectPtr)
#define mysql_rollback (mysqlStubs->mysql_rollbackPtr)
#define mysql_select_db (mysqlStubs->mysql_select_dbPtr)
#define mysql_sqlstate (mysqlStubs->mysql_sqlstatePtr)
#define mysql_ssl_set (mysqlStubs->mysql_ssl_setPtr)
#define mysql_stmt_affected_rows (mysqlStubs->mysql_stmt_affected_rowsPtr)
#define mysql_stmt_bind_param (mysqlStubs->mysql_stmt_bind_paramPtr)
#define mysql_stmt_bind_result (mysqlStubs->mysql_stmt_bind_resultPtr)
#define mysql_stmt_close (mysqlStubs->mysql_stmt_closePtr)
#define mysql_stmt_errno (mysqlStubs->mysql_stmt_errnoPtr)
#define mysql_stmt_error (mysqlStubs->mysql_stmt_errorPtr)
#define mysql_stmt_execute (mysqlStubs->mysql_stmt_executePtr)
#define mysql_stmt_fetch (mysqlStubs->mysql_stmt_fetchPtr)
#define mysql_stmt_fetch_column (mysqlStubs->mysql_stmt_fetch_columnPtr)
#define mysql_stmt_init (mysqlStubs->mysql_stmt_initPtr)
#define mysql_stmt_prepare (mysqlStubs->mysql_stmt_preparePtr)
#define mysql_stmt_result_metadata (mysqlStubs->mysql_stmt_result_metadataPtr)
#define mysql_stmt_sqlstate (mysqlStubs->mysql_stmt_sqlstatePtr)
#define mysql_stmt_store_result (mysqlStubs->mysql_stmt_store_resultPtr)
#define mysql_store_result (mysqlStubs->mysql_store_resultPtr)
#define mysql_ping (mysqlStubs->mysql_pingPtr)
MODULE_SCOPE const mysqlStubDefs *mysqlStubs;
