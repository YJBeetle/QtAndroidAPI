#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class PackageInstaller_PreapprovalDetails;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller_PreapprovalDetails_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_PreapprovalDetails_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_PreapprovalDetails_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageInstaller_PreapprovalDetails_Builder();
		
		// Methods
		android::content::pm::PackageInstaller_PreapprovalDetails build() const;
		android::content::pm::PackageInstaller_PreapprovalDetails_Builder setIcon(android::graphics::Bitmap arg0) const;
		android::content::pm::PackageInstaller_PreapprovalDetails_Builder setLabel(JString arg0) const;
		android::content::pm::PackageInstaller_PreapprovalDetails_Builder setLocale(android::icu::util::ULocale arg0) const;
		android::content::pm::PackageInstaller_PreapprovalDetails_Builder setPackageName(JString arg0) const;
	};
} // namespace android::content::pm

