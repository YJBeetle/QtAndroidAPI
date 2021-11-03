#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class Credentials : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Credentials(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credentials(QJniObject obj);
		
		// Constructors
		Credentials(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint getGid();
		jint getPid();
		jint getUid();
	};
} // namespace android::net

