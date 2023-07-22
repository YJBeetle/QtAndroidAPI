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
		
		// QJniObject forward
		template<typename ...Ts> explicit GuardedObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GuardedObject(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GuardedObject(JObject arg0, JObject arg1);
		
		// Methods
		JObject getObject() const;
	};
} // namespace java::security

