#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class MatrixCursor;
}
class JObject;
class JString;

namespace android::database
{
	class MatrixCursor_RowBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MatrixCursor_RowBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MatrixCursor_RowBuilder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::database::MatrixCursor_RowBuilder add(JObject arg0) const;
		android::database::MatrixCursor_RowBuilder add(JString arg0, JObject arg1) const;
	};
} // namespace android::database

