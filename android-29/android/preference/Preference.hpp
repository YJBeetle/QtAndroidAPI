#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::preference
{
	class PreferenceGroup;
}
namespace android::preference
{
	class PreferenceManager;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::preference
{
	class Preference : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT_ORDER();
		
		Preference(QAndroidJniObject obj);
		// Constructors
		Preference(android::content::Context arg0);
		Preference(android::content::Context arg0, __JniBaseClass arg1);
		Preference(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		Preference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		Preference() = default;
		
		// Methods
		jint compareTo(android::preference::Preference arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject getContext();
		jstring getDependency();
		QAndroidJniObject getEditor();
		QAndroidJniObject getExtras();
		jstring getFragment();
		QAndroidJniObject getIcon();
		QAndroidJniObject getIntent();
		jstring getKey();
		jint getLayoutResource();
		QAndroidJniObject getOnPreferenceChangeListener();
		QAndroidJniObject getOnPreferenceClickListener();
		jint getOrder();
		QAndroidJniObject getParent();
		QAndroidJniObject getPersistedStringSet(__JniBaseClass arg0);
		QAndroidJniObject getPreferenceDataStore();
		QAndroidJniObject getPreferenceManager();
		QAndroidJniObject getSharedPreferences();
		jboolean getShouldDisableView();
		jstring getSummary();
		jstring getTitle();
		jint getTitleRes();
		QAndroidJniObject getView(android::view::View arg0, android::view::ViewGroup arg1);
		jint getWidgetLayoutResource();
		jboolean hasKey();
		jboolean isEnabled();
		jboolean isIconSpaceReserved();
		jboolean isPersistent();
		jboolean isRecycleEnabled();
		jboolean isSelectable();
		jboolean isSingleLineTitle();
		void notifyDependencyChange(jboolean arg0);
		void onDependencyChanged(android::preference::Preference arg0, jboolean arg1);
		void onParentChanged(android::preference::Preference arg0, jboolean arg1);
		QAndroidJniObject peekExtras();
		jboolean persistStringSet(__JniBaseClass arg0);
		void restoreHierarchyState(android::os::Bundle arg0);
		void saveHierarchyState(android::os::Bundle arg0);
		void setDefaultValue(jobject arg0);
		void setDependency(jstring arg0);
		void setEnabled(jboolean arg0);
		void setFragment(jstring arg0);
		void setIcon(android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setIconSpaceReserved(jboolean arg0);
		void setIntent(android::content::Intent arg0);
		void setKey(jstring arg0);
		void setLayoutResource(jint arg0);
		void setOnPreferenceChangeListener(__JniBaseClass arg0);
		void setOnPreferenceClickListener(__JniBaseClass arg0);
		void setOrder(jint arg0);
		void setPersistent(jboolean arg0);
		void setPreferenceDataStore(__JniBaseClass arg0);
		void setRecycleEnabled(jboolean arg0);
		void setSelectable(jboolean arg0);
		void setShouldDisableView(jboolean arg0);
		void setSingleLineTitle(jboolean arg0);
		void setSummary(jint arg0);
		void setSummary(jstring arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setWidgetLayoutResource(jint arg0);
		jboolean shouldCommit();
		jboolean shouldDisableDependents();
		jstring toString();
	};
} // namespace android::preference

