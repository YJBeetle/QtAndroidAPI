#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}
class JString;
class JString;

namespace android::view::textclassifier
{
	class TextLinks_Request : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getCallingPackageName() const;
		android::os::LocaleList getDefaultLocales() const;
		android::view::textclassifier::TextClassifier_EntityConfig getEntityConfig() const;
		android::os::Bundle getExtras() const;
		JString getText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

