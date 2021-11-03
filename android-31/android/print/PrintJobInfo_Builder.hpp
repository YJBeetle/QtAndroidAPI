#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintJobInfo;
}
class JString;

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
		void putAdvancedOption(JString arg0, jint arg1);
		void putAdvancedOption(JString arg0, JString arg1);
		void setAttributes(android::print::PrintAttributes arg0);
		void setCopies(jint arg0);
		void setPages(JArray arg0);
	};
} // namespace android::print

