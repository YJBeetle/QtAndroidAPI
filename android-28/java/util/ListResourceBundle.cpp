#include "./ListResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	ListResourceBundle::ListResourceBundle(QJniObject obj) : java::util::ResourceBundle(obj) {}
	
	// Constructors
	ListResourceBundle::ListResourceBundle()
		: java::util::ResourceBundle(
			"java.util.ListResourceBundle",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass ListResourceBundle::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject ListResourceBundle::handleGetObject(jstring arg0)
	{
		return callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace java::util

