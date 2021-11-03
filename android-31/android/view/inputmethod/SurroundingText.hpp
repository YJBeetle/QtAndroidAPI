#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::inputmethod
{
	class SurroundingText : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurroundingText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurroundingText(QJniObject obj);
		
		// Constructors
		SurroundingText(JString arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jint getOffset();
		jint getSelectionEnd();
		jint getSelectionStart();
		JString getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

