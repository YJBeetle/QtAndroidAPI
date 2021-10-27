#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_ElectronicBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_ElectronicBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_ElectronicBuilder();
		
		// Methods
		QAndroidJniObject setDomain(jstring arg0);
		QAndroidJniObject setDomain(const QString &arg0);
		QAndroidJniObject setEmailArguments(jstring arg0, jstring arg1);
		QAndroidJniObject setEmailArguments(const QString &arg0, const QString &arg1);
		QAndroidJniObject setFragmentId(jstring arg0);
		QAndroidJniObject setFragmentId(const QString &arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPassword(const QString &arg0);
		QAndroidJniObject setPath(jstring arg0);
		QAndroidJniObject setPath(const QString &arg0);
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setProtocol(jstring arg0);
		QAndroidJniObject setProtocol(const QString &arg0);
		QAndroidJniObject setQueryString(jstring arg0);
		QAndroidJniObject setQueryString(const QString &arg0);
		QAndroidJniObject setUsername(jstring arg0);
		QAndroidJniObject setUsername(const QString &arg0);
	};
} // namespace android::text::style

