#pragma once

#include "./PackageInstaller_PreapprovalDetails.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../icu/util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_PreapprovalDetails_Builder.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline PackageInstaller_PreapprovalDetails_Builder::PackageInstaller_PreapprovalDetails_Builder()
		: JObject(
			"android.content.pm.PackageInstaller$PreapprovalDetails$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::content::pm::PackageInstaller_PreapprovalDetails PackageInstaller_PreapprovalDetails_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/PackageInstaller$PreapprovalDetails;"
		);
	}
	inline android::content::pm::PackageInstaller_PreapprovalDetails_Builder PackageInstaller_PreapprovalDetails_Builder::setIcon(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/Bitmap;)Landroid/content/pm/PackageInstaller$PreapprovalDetails$Builder;",
			arg0.object()
		);
	}
	inline android::content::pm::PackageInstaller_PreapprovalDetails_Builder PackageInstaller_PreapprovalDetails_Builder::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/PackageInstaller$PreapprovalDetails$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::PackageInstaller_PreapprovalDetails_Builder PackageInstaller_PreapprovalDetails_Builder::setLocale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/content/pm/PackageInstaller$PreapprovalDetails$Builder;",
			arg0.object()
		);
	}
	inline android::content::pm::PackageInstaller_PreapprovalDetails_Builder PackageInstaller_PreapprovalDetails_Builder::setPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/content/pm/PackageInstaller$PreapprovalDetails$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
