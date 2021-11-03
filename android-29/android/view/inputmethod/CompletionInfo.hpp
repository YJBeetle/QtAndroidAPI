#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class CompletionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompletionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompletionInfo(QJniObject obj);
		
		// Constructors
		CompletionInfo(jlong arg0, jint arg1, JString arg2);
		CompletionInfo(jlong arg0, jint arg1, JString arg2, JString arg3);
		
		// Methods
		jint describeContents();
		jlong getId();
		JString getLabel();
		jint getPosition();
		JString getText();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

