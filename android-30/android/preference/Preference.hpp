#pragma once

#include "../../JObject.hpp"

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
class JString;
class JObject;
class JString;

namespace android::preference
{
	class Preference : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_ORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Preference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Preference(QAndroidJniObject obj);
		
		// Constructors
		Preference(android::content::Context arg0);
		Preference(android::content::Context arg0, JObject arg1);
		Preference(android::content::Context arg0, JObject arg1, jint arg2);
		Preference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint compareTo(android::preference::Preference arg0);
		jint compareTo(JObject arg0);
		android::content::Context getContext();
		JString getDependency();
		JObject getEditor();
		android::os::Bundle getExtras();
		JString getFragment();
		android::graphics::drawable::Drawable getIcon();
		android::content::Intent getIntent();
		JString getKey();
		jint getLayoutResource();
		JObject getOnPreferenceChangeListener();
		JObject getOnPreferenceClickListener();
		jint getOrder();
		android::preference::PreferenceGroup getParent();
		JObject getPersistedStringSet(JObject arg0);
		JObject getPreferenceDataStore();
		android::preference::PreferenceManager getPreferenceManager();
		JObject getSharedPreferences();
		jboolean getShouldDisableView();
		JString getSummary();
		JString getTitle();
		jint getTitleRes();
		android::view::View getView(android::view::View arg0, android::view::ViewGroup arg1);
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
		android::os::Bundle peekExtras();
		jboolean persistStringSet(JObject arg0);
		void restoreHierarchyState(android::os::Bundle arg0);
		void saveHierarchyState(android::os::Bundle arg0);
		void setDefaultValue(JObject arg0);
		void setDependency(JString arg0);
		void setEnabled(jboolean arg0);
		void setFragment(JString arg0);
		void setIcon(android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setIconSpaceReserved(jboolean arg0);
		void setIntent(android::content::Intent arg0);
		void setKey(JString arg0);
		void setLayoutResource(jint arg0);
		void setOnPreferenceChangeListener(JObject arg0);
		void setOnPreferenceClickListener(JObject arg0);
		void setOrder(jint arg0);
		void setPersistent(jboolean arg0);
		void setPreferenceDataStore(JObject arg0);
		void setRecycleEnabled(jboolean arg0);
		void setSelectable(jboolean arg0);
		void setShouldDisableView(jboolean arg0);
		void setSingleLineTitle(jboolean arg0);
		void setSummary(jint arg0);
		void setSummary(JString arg0);
		void setTitle(jint arg0);
		void setTitle(JString arg0);
		void setWidgetLayoutResource(jint arg0);
		jboolean shouldCommit();
		jboolean shouldDisableDependents();
		JString toString();
	};
} // namespace android::preference

