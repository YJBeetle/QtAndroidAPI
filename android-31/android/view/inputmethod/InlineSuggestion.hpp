#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Size;
}
namespace android::view::inputmethod
{
	class InlineSuggestionInfo;
}
class JObject;
class JString;

namespace android::view::inputmethod
{
	class InlineSuggestion : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineSuggestion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestion(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::view::inputmethod::InlineSuggestionInfo getInfo() const;
		jint hashCode() const;
		void inflate(android::content::Context arg0, android::util::Size arg1, JObject arg2, JObject arg3) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

