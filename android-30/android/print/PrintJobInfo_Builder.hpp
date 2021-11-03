#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintJobInfo;
}

namespace android::print
{
	class PrintJobInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintJobInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJobInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrintJobInfo_Builder(android::print::PrintJobInfo arg0);
		
		// Methods
		android::print::PrintJobInfo build();
		void putAdvancedOption(jstring arg0, jint arg1);
		void putAdvancedOption(jstring arg0, jstring arg1);
		void setAttributes(android::print::PrintAttributes arg0);
		void setCopies(jint arg0);
		void setPages(jarray arg0);
	};
} // namespace android::print

