#pragma once

#ifndef ANDROID_CONTENT_CONTENTVALUES
#define ANDROID_CONTENT_CONTENTVALUES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Long;
}
namespace __jni_impl::java::lang
{
	class Float;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::lang
{
	class Double;
}
namespace __jni_impl::java::lang
{
	class Byte;
}
namespace __jni_impl::java::lang
{
	class Short;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class ContentValues : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring TAG();
		
		// Constructors
		void __constructor(__jni_impl::android::content::ContentValues arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		void remove(jstring arg0);
		jobject get(jstring arg0);
		void put(jstring arg0, __jni_impl::java::lang::Long arg1);
		void put(jstring arg0, jstring arg1);
		void put(jstring arg0, __jni_impl::java::lang::Float arg1);
		void put(jstring arg0, __jni_impl::java::lang::Boolean arg1);
		void put(jstring arg0, jbyteArray arg1);
		void put(jstring arg0, __jni_impl::java::lang::Double arg1);
		void put(jstring arg0, __jni_impl::java::lang::Byte arg1);
		void put(jstring arg0, __jni_impl::java::lang::Short arg1);
		void put(jstring arg0, __jni_impl::java::lang::Integer arg1);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		void clear();
		jint size();
		void putAll(__jni_impl::android::content::ContentValues arg0);
		jboolean containsKey(jstring arg0);
		QAndroidJniObject keySet();
		QAndroidJniObject getAsBoolean(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getAsString(jstring arg0);
		void putNull(jstring arg0);
		QAndroidJniObject getAsLong(jstring arg0);
		QAndroidJniObject getAsInteger(jstring arg0);
		QAndroidJniObject getAsShort(jstring arg0);
		QAndroidJniObject getAsByte(jstring arg0);
		QAndroidJniObject getAsDouble(jstring arg0);
		QAndroidJniObject getAsFloat(jstring arg0);
		jbyteArray getAsByteArray(jstring arg0);
		QAndroidJniObject valueSet();
	};
} // namespace __jni_impl::android::content

#include "../../java/lang/Long.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Double.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/Short.hpp"
#include "../../java/lang/Integer.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ContentValues::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ContentValues::TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContentValues::__constructor(__jni_impl::android::content::ContentValues arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object());
	}
	void ContentValues::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(I)V",
			arg0);
	}
	void ContentValues::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"()V");
	}
	
	// Methods
	void ContentValues::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject ContentValues::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Long arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Boolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Double arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Byte arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Short arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ContentValues::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ContentValues::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentValues::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ContentValues::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint ContentValues::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void ContentValues::putAll(__jni_impl::android::content::ContentValues arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ContentValues::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ContentValues::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject ContentValues::getAsBoolean(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint ContentValues::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ContentValues::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ContentValues::getAsString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void ContentValues::putNull(jstring arg0)
	{
		__thiz.callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsLong(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsInteger(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsShort(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsByte(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsDouble(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsFloat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	jbyteArray ContentValues::getAsByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject ContentValues::valueSet()
	{
		return __thiz.callObjectMethod(
			"valueSet",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentValues : public __jni_impl::android::content::ContentValues
	{
	public:
		ContentValues(QAndroidJniObject obj) { __thiz = obj; }
		ContentValues(__jni_impl::android::content::ContentValues arg0)
		{
			__constructor(
				arg0);
		}
		ContentValues(jint arg0)
		{
			__constructor(
				arg0);
		}
		ContentValues()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTVALUES

