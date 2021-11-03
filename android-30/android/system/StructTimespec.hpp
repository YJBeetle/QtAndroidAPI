#pragma once

#include "../../JObject.hpp"


namespace android::system
{
	class StructTimespec : public JObject
	{
	public:
		// Fields
		jlong tv_nsec();
		jlong tv_sec();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructTimespec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructTimespec(QJniObject obj);
		
		// Constructors
		StructTimespec(jlong arg0, jlong arg1);
		
		// Methods
		jint compareTo(android::system::StructTimespec arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::system

