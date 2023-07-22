#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Rational;
}
class JString;
class JObject;
class JString;

namespace android::app
{
	class PictureInPictureParams : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PictureInPictureParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PictureInPictureParams(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getActions() const;
		android::util::Rational getAspectRatio() const;
		android::app::RemoteAction getCloseAction() const;
		android::util::Rational getExpandedAspectRatio() const;
		android::graphics::Rect getSourceRectHint() const;
		JString getSubtitle() const;
		JString getTitle() const;
		jint hashCode() const;
		jboolean isAutoEnterEnabled() const;
		jboolean isSeamlessResizeEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

