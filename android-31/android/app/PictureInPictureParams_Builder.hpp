#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PictureInPictureParams;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class Rational;
}

namespace android::app
{
	class PictureInPictureParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PictureInPictureParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PictureInPictureParams_Builder(QAndroidJniObject obj);
		
		// Constructors
		PictureInPictureParams_Builder();
		
		// Methods
		android::app::PictureInPictureParams build();
		android::app::PictureInPictureParams_Builder setActions(JObject arg0);
		android::app::PictureInPictureParams_Builder setAspectRatio(android::util::Rational arg0);
		android::app::PictureInPictureParams_Builder setAutoEnterEnabled(jboolean arg0);
		android::app::PictureInPictureParams_Builder setSeamlessResizeEnabled(jboolean arg0);
		android::app::PictureInPictureParams_Builder setSourceRectHint(android::graphics::Rect arg0);
	};
} // namespace android::app

