#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PictureInPictureParams;
}
namespace android::app
{
	class RemoteAction;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class Rational;
}
class JString;

namespace android::app
{
	class PictureInPictureParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PictureInPictureParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PictureInPictureParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PictureInPictureParams_Builder();
		PictureInPictureParams_Builder(android::app::PictureInPictureParams arg0);
		
		// Methods
		android::app::PictureInPictureParams build() const;
		android::app::PictureInPictureParams_Builder setActions(JObject arg0) const;
		android::app::PictureInPictureParams_Builder setAspectRatio(android::util::Rational arg0) const;
		android::app::PictureInPictureParams_Builder setAutoEnterEnabled(jboolean arg0) const;
		android::app::PictureInPictureParams_Builder setCloseAction(android::app::RemoteAction arg0) const;
		android::app::PictureInPictureParams_Builder setExpandedAspectRatio(android::util::Rational arg0) const;
		android::app::PictureInPictureParams_Builder setSeamlessResizeEnabled(jboolean arg0) const;
		android::app::PictureInPictureParams_Builder setSourceRectHint(android::graphics::Rect arg0) const;
		android::app::PictureInPictureParams_Builder setSubtitle(JString arg0) const;
		android::app::PictureInPictureParams_Builder setTitle(JString arg0) const;
	};
} // namespace android::app

