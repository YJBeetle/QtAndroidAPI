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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompletionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompletionInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CompletionInfo(jlong arg0, jint arg1, JString arg2);
		CompletionInfo(jlong arg0, jint arg1, JString arg2, JString arg3);
		
		// Methods
		jint describeContents() const;
		jlong getId() const;
		JString getLabel() const;
		jint getPosition() const;
		JString getText() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

