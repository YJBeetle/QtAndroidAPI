#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCE
#define ANDROID_PREFERENCE_PREFERENCE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::preference
{
	class PreferenceGroup;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::preference
{
	class PreferenceManager;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::preference
{
	class Preference : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT_ORDER();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring toString();
		jint compareTo(__jni_impl::android::preference::Preference arg0);
		jint compareTo(jobject arg0);
		jstring getKey();
		QAndroidJniObject getParent();
		QAndroidJniObject getContext();
		jboolean isEnabled();
		jstring getFragment();
		void setEnabled(jboolean arg0);
		void saveHierarchyState(__jni_impl::android::os::Bundle arg0);
		void restoreHierarchyState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getIcon();
		QAndroidJniObject getView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup arg1);
		void setIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		jint getOrder();
		QAndroidJniObject getSharedPreferences();
		QAndroidJniObject getPreferenceManager();
		jstring getSummary();
		void setFragment(jstring arg0);
		void setFragment(const QString &arg0);
		void setPreferenceDataStore(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPreferenceDataStore();
		QAndroidJniObject peekExtras();
		void setLayoutResource(jint arg0);
		jint getLayoutResource();
		void setWidgetLayoutResource(jint arg0);
		jint getWidgetLayoutResource();
		void setOrder(jint arg0);
		jint getTitleRes();
		void setSummary(jint arg0);
		void setSummary(jstring arg0);
		void setSummary(const QString &arg0);
		void setSelectable(jboolean arg0);
		void setShouldDisableView(jboolean arg0);
		jboolean getShouldDisableView();
		void setRecycleEnabled(jboolean arg0);
		jboolean isRecycleEnabled();
		void setSingleLineTitle(jboolean arg0);
		jboolean isSingleLineTitle();
		void setIconSpaceReserved(jboolean arg0);
		jboolean isIconSpaceReserved();
		jboolean hasKey();
		jboolean isPersistent();
		void setPersistent(jboolean arg0);
		void setOnPreferenceChangeListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnPreferenceChangeListener();
		void setOnPreferenceClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnPreferenceClickListener();
		QAndroidJniObject getEditor();
		jboolean shouldCommit();
		void notifyDependencyChange(jboolean arg0);
		void onDependencyChanged(__jni_impl::android::preference::Preference arg0, jboolean arg1);
		jboolean shouldDisableDependents();
		void setDependency(jstring arg0);
		void setDependency(const QString &arg0);
		jstring getDependency();
		void setDefaultValue(jobject arg0);
		jboolean persistStringSet(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPersistedStringSet(__jni_impl::__JniBaseClass arg0);
		void setKey(jstring arg0);
		void setKey(const QString &arg0);
		QAndroidJniObject getIntent();
		void setIntent(__jni_impl::android::content::Intent arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void setTitle(jint arg0);
		jstring getTitle();
		QAndroidJniObject getExtras();
		void onParentChanged(__jni_impl::android::preference::Preference arg0, jboolean arg1);
		jboolean isSelectable();
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "PreferenceGroup.hpp"
#include "../os/Bundle.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "PreferenceManager.hpp"
#include "../content/res/TypedArray.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	jint Preference::DEFAULT_ORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.preference.Preference",
			"DEFAULT_ORDER"
		);
	}
	
	// Constructors
	void Preference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Preference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Preference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring Preference::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Preference::compareTo(__jni_impl::android::preference::Preference arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/preference/Preference;)I",
			arg0.__jniObject().object()
		);
	}
	jint Preference::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jstring Preference::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Preference::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/preference/PreferenceGroup;"
		);
	}
	QAndroidJniObject Preference::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jboolean Preference::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jstring Preference::getFragment()
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Preference::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void Preference::saveHierarchyState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"saveHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::restoreHierarchyState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Preference::getView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Preference::setIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	jint Preference::getOrder()
	{
		return __thiz.callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	QAndroidJniObject Preference::getSharedPreferences()
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	QAndroidJniObject Preference::getPreferenceManager()
	{
		return __thiz.callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	jstring Preference::getSummary()
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Preference::setFragment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setFragment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFragment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setPreferenceDataStore(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreferenceDataStore",
			"(Landroid/preference/PreferenceDataStore;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getPreferenceDataStore()
	{
		return __thiz.callObjectMethod(
			"getPreferenceDataStore",
			"()Landroid/preference/PreferenceDataStore;"
		);
	}
	QAndroidJniObject Preference::peekExtras()
	{
		return __thiz.callObjectMethod(
			"peekExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void Preference::setLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	jint Preference::getLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	void Preference::setWidgetLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidgetLayoutResource",
			"(I)V",
			arg0
		);
	}
	jint Preference::getWidgetLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getWidgetLayoutResource",
			"()I"
		);
	}
	void Preference::setOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	jint Preference::getTitleRes()
	{
		return __thiz.callMethod<jint>(
			"getTitleRes",
			"()I"
		);
	}
	void Preference::setSummary(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(I)V",
			arg0
		);
	}
	void Preference::setSummary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Preference::setSummary(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setSelectable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectable",
			"(Z)V",
			arg0
		);
	}
	void Preference::setShouldDisableView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShouldDisableView",
			"(Z)V",
			arg0
		);
	}
	jboolean Preference::getShouldDisableView()
	{
		return __thiz.callMethod<jboolean>(
			"getShouldDisableView",
			"()Z"
		);
	}
	void Preference::setRecycleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRecycleEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean Preference::isRecycleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isRecycleEnabled",
			"()Z"
		);
	}
	void Preference::setSingleLineTitle(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSingleLineTitle",
			"(Z)V",
			arg0
		);
	}
	jboolean Preference::isSingleLineTitle()
	{
		return __thiz.callMethod<jboolean>(
			"isSingleLineTitle",
			"()Z"
		);
	}
	void Preference::setIconSpaceReserved(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIconSpaceReserved",
			"(Z)V",
			arg0
		);
	}
	jboolean Preference::isIconSpaceReserved()
	{
		return __thiz.callMethod<jboolean>(
			"isIconSpaceReserved",
			"()Z"
		);
	}
	jboolean Preference::hasKey()
	{
		return __thiz.callMethod<jboolean>(
			"hasKey",
			"()Z"
		);
	}
	jboolean Preference::isPersistent()
	{
		return __thiz.callMethod<jboolean>(
			"isPersistent",
			"()Z"
		);
	}
	void Preference::setPersistent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPersistent",
			"(Z)V",
			arg0
		);
	}
	void Preference::setOnPreferenceChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreferenceChangeListener",
			"(Landroid/preference/Preference$OnPreferenceChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getOnPreferenceChangeListener()
	{
		return __thiz.callObjectMethod(
			"getOnPreferenceChangeListener",
			"()Landroid/preference/Preference$OnPreferenceChangeListener;"
		);
	}
	void Preference::setOnPreferenceClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreferenceClickListener",
			"(Landroid/preference/Preference$OnPreferenceClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getOnPreferenceClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnPreferenceClickListener",
			"()Landroid/preference/Preference$OnPreferenceClickListener;"
		);
	}
	QAndroidJniObject Preference::getEditor()
	{
		return __thiz.callObjectMethod(
			"getEditor",
			"()Landroid/content/SharedPreferences$Editor;"
		);
	}
	jboolean Preference::shouldCommit()
	{
		return __thiz.callMethod<jboolean>(
			"shouldCommit",
			"()Z"
		);
	}
	void Preference::notifyDependencyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	void Preference::onDependencyChanged(__jni_impl::android::preference::Preference arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onDependencyChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Preference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
	void Preference::setDependency(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setDependency(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDependency",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Preference::getDependency()
	{
		return __thiz.callObjectMethod(
			"getDependency",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Preference::setDefaultValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean Preference::persistStringSet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"persistStringSet",
			"(Ljava/util/Set;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Preference::getPersistedStringSet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getPersistedStringSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	void Preference::setKey(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Preference::setKey(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setKey",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Preference::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	void Preference::setIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Preference::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Preference::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Preference::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	jstring Preference::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Preference::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void Preference::onParentChanged(__jni_impl::android::preference::Preference arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onParentChanged",
			"(Landroid/preference/Preference;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Preference::isSelectable()
	{
		return __thiz.callMethod<jboolean>(
			"isSelectable",
			"()Z"
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class Preference : public __jni_impl::android::preference::Preference
	{
	public:
		Preference(QAndroidJniObject obj) { __thiz = obj; }
		Preference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Preference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Preference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Preference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCE

