#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::lang
{
	class Boolean;
}
class JClass;
class JObject;
class JString;
namespace java::lang::ref
{
	class Reference;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class Provider_Service : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Provider_Service(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Provider_Service(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Provider_Service(java::security::Provider arg0, JString arg1, JString arg2, JString arg3, JObject arg4, JObject arg5);
		
		// Methods
		JString getAlgorithm() const;
		JString getAttribute(JString arg0) const;
		JString getClassName() const;
		java::security::Provider getProvider() const;
		JString getType() const;
		JObject newInstance(JObject arg0) const;
		jboolean supportsParameter(JObject arg0) const;
		JString toString() const;
	};
} // namespace java::security

