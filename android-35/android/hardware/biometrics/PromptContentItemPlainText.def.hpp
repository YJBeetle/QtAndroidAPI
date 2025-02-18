#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::hardware::biometrics
{
	class PromptContentItemPlainText : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PromptContentItemPlainText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PromptContentItemPlainText(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PromptContentItemPlainText(JString arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::biometrics

