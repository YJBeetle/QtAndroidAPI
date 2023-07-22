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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintJobInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJobInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrintJobInfo_Builder(android::print::PrintJobInfo arg0);
		
		// Methods
		android::print::PrintJobInfo build() const;
		void putAdvancedOption(JString arg0, jint arg1) const;
		void putAdvancedOption(JString arg0, JString arg1) const;
		void setAttributes(android::print::PrintAttributes arg0) const;
		void setCopies(jint arg0) const;
		void setPages(JArray arg0) const;
	};
} // namespace android::print

