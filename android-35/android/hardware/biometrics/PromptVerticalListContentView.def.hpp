#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::hardware::biometrics
{
	class PromptVerticalListContentView : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PromptVerticalListContentView(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PromptVerticalListContentView(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaxEachItemCharacterNumber();
		static jint getMaxItemCount();
		jint describeContents() const;
		JString getDescription() const;
		JObject getListItems() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::biometrics

