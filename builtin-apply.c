#include "dir.h"
		struct strbuf name = STRBUF_INIT;
		struct strbuf first = STRBUF_INIT;
		struct strbuf sp = STRBUF_INIT;
			struct strbuf sp = STRBUF_INIT;
	if (patch->def_name && root) {
		char *s = xmalloc(root_len + strlen(patch->def_name) + 1);
		strcpy(s, root);
		strcpy(s + root_len, patch->def_name);
		free(patch->def_name);
		patch->def_name = s;
	}
	struct strbuf qname = STRBUF_INIT;
		if (sizeof(tgtfixbuf) > tgtlen)
	struct strbuf buf = STRBUF_INIT;
		if (!ce)
			die("make_cache_entry failed for path '%s'", name);
			remove_path(patch->old_name);
	struct strbuf nbuf = STRBUF_INIT;
	struct strbuf buf = STRBUF_INIT;