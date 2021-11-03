#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class MatrixCursor;
}

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
		android::database::MatrixCursor_RowBuilder add(jobject arg0);
		android::database::MatrixCursor_RowBuilder add(jstring arg0, jobject arg1);
	};
} // namespace android::database

