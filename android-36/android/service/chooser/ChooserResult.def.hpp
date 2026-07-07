#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::service::chooser
{
	class ChooserResult : public JObject
	{
	public:
		// Fields
		static jint CHOOSER_RESULT_COPY();
		static jint CHOOSER_RESULT_EDIT();
		static jint CHOOSER_RESULT_SELECTED_COMPONENT();
		static jint CHOOSER_RESULT_UNKNOWN();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChooserResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChooserResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::ComponentName getSelectedComponent() const;
		jint getType() const;
		jint hashCode() const;
		jboolean isShortcut() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::chooser

