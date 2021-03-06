/*
    This file was automatically generated from resolvers/boffin/boffin.sql on Tue Apr 28 16:44:27 BST 2009.
*/
namespace playdar {

static const char * boffin_schema_sql = 
"CREATE TABLE IF NOT EXISTS tag ("
"	name TEXT NOT NULL"
");"
"CREATE UNIQUE INDEX tag_name_idx ON tag(name);"
"CREATE TABLE IF NOT EXISTS track_tag ("
"	track INTEGER NOT NULL,"
"	tag INTEGER NOT NULL,"
"	weight FLOAT NOT NULL"
");"
"CREATE INDEX track_tag_track_idx ON track_tag(track);"
"CREATE INDEX track_tag_tag_idx ON track_tag(tag);"
"CREATE TABLE IF NOT EXISTS boffin_system ("
"    key TEXT NOT NULL PRIMARY KEY,"
"    value TEXT NOT NULL DEFAULT ''"
");"
"INSERT INTO boffin_system(key,value) VALUES('schema_version', '1');"
    ;

const char * get_boffin_sql()
{
    return boffin_schema_sql;
}

} // namespace

