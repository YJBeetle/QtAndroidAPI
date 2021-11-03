#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class Config : public JObject
	{
	public:
		// Fields
		static jboolean DEBUG();
		static jboolean LOGD();
		static jboolean LOGV();
		static jboolean PROFILE();
		static jboolean RELEASE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Config(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Config(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

