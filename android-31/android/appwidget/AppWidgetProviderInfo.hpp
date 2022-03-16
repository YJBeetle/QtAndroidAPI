#pragma once

#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/pm/ActivityInfo.def.hpp"
#include "../content/pm/PackageManager.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AppWidgetProviderInfo.def.hpp"

namespace android::appwidget
{
	// Fields
	inline JObject AppWidgetProviderInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AppWidgetProviderInfo::RESIZE_BOTH()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_BOTH"
		);
	}
	inline jint AppWidgetProviderInfo::RESIZE_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_HORIZONTAL"
		);
	}
	inline jint AppWidgetProviderInfo::RESIZE_NONE()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_NONE"
		);
	}
	inline jint AppWidgetProviderInfo::RESIZE_VERTICAL()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_VERTICAL"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_CATEGORY_HOME_SCREEN()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_HOME_SCREEN"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_CATEGORY_KEYGUARD()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_KEYGUARD"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_CATEGORY_SEARCHBOX()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_SEARCHBOX"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_FEATURE_CONFIGURATION_OPTIONAL()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_CONFIGURATION_OPTIONAL"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_FEATURE_HIDE_FROM_PICKER()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_HIDE_FROM_PICKER"
		);
	}
	inline jint AppWidgetProviderInfo::WIDGET_FEATURE_RECONFIGURABLE()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_RECONFIGURABLE"
		);
	}
	inline jint AppWidgetProviderInfo::autoAdvanceViewId()
	{
		return getField<jint>(
			"autoAdvanceViewId"
		);
	}
	inline android::content::ComponentName AppWidgetProviderInfo::configure()
	{
		return getObjectField(
			"configure",
			"Landroid/content/ComponentName;"
		);
	}
	inline jint AppWidgetProviderInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	inline jint AppWidgetProviderInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline jint AppWidgetProviderInfo::initialKeyguardLayout()
	{
		return getField<jint>(
			"initialKeyguardLayout"
		);
	}
	inline jint AppWidgetProviderInfo::initialLayout()
	{
		return getField<jint>(
			"initialLayout"
		);
	}
	inline JString AppWidgetProviderInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/String;"
		);
	}
	inline jint AppWidgetProviderInfo::maxResizeHeight()
	{
		return getField<jint>(
			"maxResizeHeight"
		);
	}
	inline jint AppWidgetProviderInfo::maxResizeWidth()
	{
		return getField<jint>(
			"maxResizeWidth"
		);
	}
	inline jint AppWidgetProviderInfo::minHeight()
	{
		return getField<jint>(
			"minHeight"
		);
	}
	inline jint AppWidgetProviderInfo::minResizeHeight()
	{
		return getField<jint>(
			"minResizeHeight"
		);
	}
	inline jint AppWidgetProviderInfo::minResizeWidth()
	{
		return getField<jint>(
			"minResizeWidth"
		);
	}
	inline jint AppWidgetProviderInfo::minWidth()
	{
		return getField<jint>(
			"minWidth"
		);
	}
	inline jint AppWidgetProviderInfo::previewImage()
	{
		return getField<jint>(
			"previewImage"
		);
	}
	inline jint AppWidgetProviderInfo::previewLayout()
	{
		return getField<jint>(
			"previewLayout"
		);
	}
	inline android::content::ComponentName AppWidgetProviderInfo::provider()
	{
		return getObjectField(
			"provider",
			"Landroid/content/ComponentName;"
		);
	}
	inline jint AppWidgetProviderInfo::resizeMode()
	{
		return getField<jint>(
			"resizeMode"
		);
	}
	inline jint AppWidgetProviderInfo::targetCellHeight()
	{
		return getField<jint>(
			"targetCellHeight"
		);
	}
	inline jint AppWidgetProviderInfo::targetCellWidth()
	{
		return getField<jint>(
			"targetCellWidth"
		);
	}
	inline jint AppWidgetProviderInfo::updatePeriodMillis()
	{
		return getField<jint>(
			"updatePeriodMillis"
		);
	}
	inline jint AppWidgetProviderInfo::widgetCategory()
	{
		return getField<jint>(
			"widgetCategory"
		);
	}
	inline jint AppWidgetProviderInfo::widgetFeatures()
	{
		return getField<jint>(
			"widgetFeatures"
		);
	}
	
	// Constructors
	inline AppWidgetProviderInfo::AppWidgetProviderInfo()
		: JObject(
			"android.appwidget.AppWidgetProviderInfo",
			"()V"
		) {}
	inline AppWidgetProviderInfo::AppWidgetProviderInfo(android::os::Parcel arg0)
		: JObject(
			"android.appwidget.AppWidgetProviderInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::appwidget::AppWidgetProviderInfo AppWidgetProviderInfo::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	inline jint AppWidgetProviderInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::pm::ActivityInfo AppWidgetProviderInfo::getActivityInfo() const
	{
		return callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	inline android::os::UserHandle AppWidgetProviderInfo::getProfile() const
	{
		return callObjectMethod(
			"getProfile",
			"()Landroid/os/UserHandle;"
		);
	}
	inline JString AppWidgetProviderInfo::loadDescription(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable AppWidgetProviderInfo::loadIcon(android::content::Context arg0, jint arg1) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	inline JString AppWidgetProviderInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable AppWidgetProviderInfo::loadPreviewImage(android::content::Context arg0, jint arg1) const
	{
		return callObjectMethod(
			"loadPreviewImage",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	inline JString AppWidgetProviderInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AppWidgetProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::appwidget

// Base class headers

