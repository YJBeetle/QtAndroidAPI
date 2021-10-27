#include "../io/InputStream.hpp"
#include "../io/Reader.hpp"
#include "./PropertyResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	PropertyResourceBundle::PropertyResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyResourceBundle::PropertyResourceBundle(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	PropertyResourceBundle::PropertyResourceBundle(java::io::Reader &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PropertyResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject PropertyResourceBundle::handleGetObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject PropertyResourceBundle::handleGetObject(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
} // namespace java::util

