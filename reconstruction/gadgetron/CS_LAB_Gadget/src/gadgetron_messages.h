#ifndef GADGETRON_MESSAGES_H
#define GADGETRON_MESSAGES_H

#if not __GADGETRON_VERSION_HIGHER_3_6__ == 1
	#define GDEBUG(...) GADGET_DEBUG1("DEBUG: " __VA_ARGS__)
	#define GINFO(...) GADGET_DEBUG1("INFO: " __VA_ARGS__)
	#define GWARN(...) GADGET_DEBUG1("WARNING: " __VA_ARGS__)
	#define GERROR(...) GADGET_DEBUG1("ERROR: " __VA_ARGS__)
	#define GVERBOSE(...) GADGET_DEBUG1("VERBOSE: " __VA_ARGS__)

	#define GEXCEPTION(x,y) GADGET_DEBUG_EXCEPTION(x,y)
#endif

#endif // GADGETRON_MESSAGES_H
