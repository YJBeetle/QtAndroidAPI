#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller_PreapprovalDetails : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_PreapprovalDetails(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_PreapprovalDetails(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::graphics::Bitmap getIcon() const;
		JString getLabel() const;
		android::icu::util::ULocale getLocale() const;
		JString getPackageName() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

