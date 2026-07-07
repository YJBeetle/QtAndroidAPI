#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::view
{
	class SurfaceControl_JankData : public JObject
	{
	public:
		// Fields
		static jint JANK_APPLICATION();
		static jint JANK_COMPOSER();
		static jint JANK_NONE();
		static jint JANK_OTHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_JankData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_JankData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getActualAppFrameTimeNanos() const;
		jint getJankType() const;
		jlong getScheduledAppFrameTimeNanos() const;
		jlong getVsyncId() const;
		JString toString() const;
	};
} // namespace android::view

