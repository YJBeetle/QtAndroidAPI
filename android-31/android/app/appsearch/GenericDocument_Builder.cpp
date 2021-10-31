#include "./GenericDocument.hpp"
#include "./GenericDocument_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	GenericDocument_Builder::GenericDocument_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GenericDocument_Builder::GenericDocument_Builder(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.app.appsearch.GenericDocument$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::app::appsearch::GenericDocument GenericDocument_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setCreationTimestampMillis(jlong arg0)
	{
		return callObjectMethod(
			"setCreationTimestampMillis",
			"(J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyBoolean(jstring arg0, jbooleanArray arg1)
	{
		return callObjectMethod(
			"setPropertyBoolean",
			"(Ljava/lang/String;[Z)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyBytes(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"setPropertyBytes",
			"(Ljava/lang/String;[[B)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyDocument(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"setPropertyDocument",
			"(Ljava/lang/String;[Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyDouble(jstring arg0, jdoubleArray arg1)
	{
		return callObjectMethod(
			"setPropertyDouble",
			"(Ljava/lang/String;[D)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyLong(jstring arg0, jlongArray arg1)
	{
		return callObjectMethod(
			"setPropertyLong",
			"(Ljava/lang/String;[J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setPropertyString(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"setPropertyString",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setScore(jint arg0)
	{
		return callObjectMethod(
			"setScore",
			"(I)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
	android::app::appsearch::GenericDocument_Builder GenericDocument_Builder::setTtlMillis(jlong arg0)
	{
		return callObjectMethod(
			"setTtlMillis",
			"(J)Landroid/app/appsearch/GenericDocument$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

