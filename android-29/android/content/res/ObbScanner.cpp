#include "./ObbInfo.hpp"
#include "./ObbScanner.hpp"

namespace android::content::res
{
	// Fields
	
	ObbScanner::ObbScanner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ObbScanner::getObbInfo(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0
		);
	}
	QAndroidJniObject ObbScanner::getObbInfo(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::content::res

