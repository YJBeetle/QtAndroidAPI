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
		
		// QJniObject forward
		template<typename ...Ts> explicit Tile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Tile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getContentDescription();
		android::graphics::drawable::Icon getIcon();
		jstring getLabel();
		jint getState();
		jstring getStateDescription();
		jstring getSubtitle();
		void setContentDescription(jstring arg0);
		void setIcon(android::graphics::drawable::Icon arg0);
		void setLabel(jstring arg0);
		void setState(jint arg0);
		void setStateDescription(jstring arg0);
		void setSubtitle(jstring arg0);
		void updateTile();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quicksettings

