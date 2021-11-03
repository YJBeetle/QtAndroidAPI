#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectOutputStream;
}
class JObject;

namespace java::security
{
	class GuardedObject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GuardedObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GuardedObject(QAndroidJniObject obj);
		
		// Constructors
		GuardedObject(JObject arg0, JObject arg1);
		
		// Methods
		JObject getObject();
	};
} // namespace java::security

