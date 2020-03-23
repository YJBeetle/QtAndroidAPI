#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES
#define ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::tv
{
	class TvContract_Programs_Genres : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ANIMAL_WILDLIFE();
		static QAndroidJniObject ARTS();
		static QAndroidJniObject COMEDY();
		static QAndroidJniObject DRAMA();
		static QAndroidJniObject EDUCATION();
		static QAndroidJniObject ENTERTAINMENT();
		static QAndroidJniObject FAMILY_KIDS();
		static QAndroidJniObject GAMING();
		static QAndroidJniObject LIFE_STYLE();
		static QAndroidJniObject MOVIES();
		static QAndroidJniObject MUSIC();
		static QAndroidJniObject NEWS();
		static QAndroidJniObject PREMIER();
		static QAndroidJniObject SHOPPING();
		static QAndroidJniObject SPORTS();
		static QAndroidJniObject TECH_SCIENCE();
		static QAndroidJniObject TRAVEL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject decode(jstring arg0);
		static QAndroidJniObject encode(jarray arg0);
		static jboolean isCanonical(jstring arg0);
	};
} // namespace __jni_impl::android::media::tv


namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContract_Programs_Genres::ANIMAL_WILDLIFE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ANIMAL_WILDLIFE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::ARTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ARTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::COMEDY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"COMEDY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::DRAMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"DRAMA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::EDUCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"EDUCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::ENTERTAINMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ENTERTAINMENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::FAMILY_KIDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"FAMILY_KIDS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::GAMING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"GAMING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::LIFE_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"LIFE_STYLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::MOVIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"MOVIES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::MUSIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"MUSIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::NEWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"NEWS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::PREMIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"PREMIER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::SHOPPING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"SHOPPING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::SPORTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"SPORTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::TECH_SCIENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"TECH_SCIENCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Programs_Genres::TRAVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"TRAVEL",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TvContract_Programs_Genres::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$Programs$Genres",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TvContract_Programs_Genres::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract$Programs$Genres",
			"decode",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject TvContract_Programs_Genres::encode(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract$Programs$Genres",
			"encode",
			"([Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean TvContract_Programs_Genres::isCanonical(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.tv.TvContract$Programs$Genres",
			"isCanonical",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_Programs_Genres : public __jni_impl::android::media::tv::TvContract_Programs_Genres
	{
	public:
		TvContract_Programs_Genres(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_Programs_Genres()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES

