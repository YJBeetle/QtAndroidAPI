#pragma once

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "DialogPreference.hpp"

namespace __jni_impl::android::app
{
	class AlertDialog_Builder;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}

namespace __jni_impl::android::preference
{
	class ListPreference : public __jni_impl::android::preference::DialogPreference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(jstring arg0);
		jint findIndexOfValue(const QString &arg0);
		jarray getEntries();
		jstring getEntry();
		jarray getEntryValues();
		jstring getSummary();
		jstring getValue();
		void setEntries(jarray arg0);
		void setEntries(jint arg0);
		void setEntryValues(jarray arg0);
		void setEntryValues(jint arg0);
		void setSummary(jstring arg0);
		void setSummary(const QString &arg0);
		void setValue(jstring arg0);
		void setValue(const QString &arg0);
		void setValueIndex(jint arg0);
	};
} // namespace __jni_impl::android::preference

#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void ListPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint ListPreference::findIndexOfValue(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ListPreference::findIndexOfValue(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ListPreference::getEntries()
	{
		return __thiz.callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getEntry()
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jarray ListPreference::getEntryValues()
	{
		return __thiz.callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getSummary()
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ListPreference::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ListPreference::setEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntries(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setSummary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setSummary(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ListPreference::setValue(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ListPreference::setValue(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ListPreference::setValueIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setValueIndex",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class ListPreference : public __jni_impl::android::preference::ListPreference
	{
	public:
		ListPreference(QAndroidJniObject obj) { __thiz = obj; }
		ListPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

