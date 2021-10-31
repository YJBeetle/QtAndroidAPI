#include "./ListResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	ListResourceBundle::ListResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListResourceBundle::ListResourceBundle()
	{
		__thiz = QAndroidJniObject(
			"java.util.ListResourceBundle",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject ListResourceBundle::handleGetObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace java::util

