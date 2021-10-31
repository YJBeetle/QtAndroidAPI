#include "../io/InputStream.hpp"
#include "../io/Reader.hpp"
#include "./PropertyResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyResourceBundle::PropertyResourceBundle(QAndroidJniObject obj) : java::util::ResourceBundle(obj) {}
	
	// Constructors
	PropertyResourceBundle::PropertyResourceBundle(java::io::InputStream arg0)
		: java::util::ResourceBundle(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	PropertyResourceBundle::PropertyResourceBundle(java::io::Reader arg0)
		: java::util::ResourceBundle(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass PropertyResourceBundle::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject PropertyResourceBundle::handleGetObject(jstring arg0)
	{
		return callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace java::util

