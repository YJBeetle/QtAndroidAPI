#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::quicksettings
{
	class Tile : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATE_ACTIVE();
		static jint STATE_INACTIVE();
		static jint STATE_UNAVAILABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Tile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Tile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getContentDescription() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getLabel() const;
		jint getState() const;
		JString getSubtitle() const;
		void setContentDescription(JString arg0) const;
		void setIcon(android::graphics::drawable::Icon arg0) const;
		void setLabel(JString arg0) const;
		void setState(jint arg0) const;
		void setSubtitle(JString arg0) const;
		void updateTile() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quicksettings

