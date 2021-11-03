#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::system
{
	class StructTimespec : public JObject
	{
	public:
		// Fields
		jlong tv_nsec();
		jlong tv_sec();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructTimespec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructTimespec(QAndroidJniObject obj);
		
		// Constructors
		StructTimespec(jlong arg0, jlong arg1);
		
		// Methods
		jint compareTo(android::system::StructTimespec arg0);
		jint compareTo(JObject arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::system

