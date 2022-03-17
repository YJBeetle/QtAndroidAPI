#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}

namespace android::app
{
	class Instrumentation_ActivityResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instrumentation_ActivityResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation_ActivityResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1);
		
		// Methods
		jint getResultCode() const;
		android::content::Intent getResultData() const;
	};
} // namespace android::app

