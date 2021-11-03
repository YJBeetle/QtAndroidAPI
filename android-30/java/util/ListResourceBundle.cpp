#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ListResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	ListResourceBundle::ListResourceBundle(QAndroidJniObject obj) : java::util::ResourceBundle(obj) {}
	
	// Constructors
	ListResourceBundle::ListResourceBundle()
		: java::util::ResourceBundle(
			"java.util.ListResourceBundle",
			"()V"
		) {}
	
	// Methods
	JObject ListResourceBundle::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject ListResourceBundle::handleGetObject(JString arg0) const
	{
		return callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

