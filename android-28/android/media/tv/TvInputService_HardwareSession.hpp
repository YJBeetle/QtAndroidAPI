#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TvInputService_Session.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class Surface;
}

namespace android::media::tv
{
	class TvInputService_HardwareSession : public android::media::tv::TvInputService_Session
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInputService_HardwareSession(const char *className, const char *sig, Ts...agv) : android::media::tv::TvInputService_Session(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService_HardwareSession(QAndroidJniObject obj);
		
		// Constructors
		TvInputService_HardwareSession(android::content::Context arg0);
		
		// Methods
		jstring getHardwareInputId();
		void onHardwareVideoAvailable();
		void onHardwareVideoUnavailable(jint arg0);
		jboolean onSetSurface(android::view::Surface arg0);
	};
} // namespace android::media::tv

