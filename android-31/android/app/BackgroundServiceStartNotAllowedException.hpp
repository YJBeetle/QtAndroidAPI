#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"
#include "./ServiceStartNotAllowedException.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class BackgroundServiceStartNotAllowedException : public android::app::ServiceStartNotAllowedException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackgroundServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : android::app::ServiceStartNotAllowedException(className, sig, std::forward<Ts>(agv)...) {}
		BackgroundServiceStartNotAllowedException(QAndroidJniObject obj);
		
		// Constructors
		BackgroundServiceStartNotAllowedException(jstring arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

