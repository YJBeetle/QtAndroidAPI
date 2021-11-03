#include "../io/InputStream.hpp"
#include "../io/Reader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PropertyResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	PropertyResourceBundle::PropertyResourceBundle(QJniObject obj) : java::util::ResourceBundle(obj) {}
	
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
	JObject PropertyResourceBundle::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject PropertyResourceBundle::handleGetObject(JString arg0)
	{
		return callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

