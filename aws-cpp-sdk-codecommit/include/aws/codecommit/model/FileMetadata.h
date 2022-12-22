﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>A file to be added, updated, or deleted as part of a commit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/FileMetadata">AWS
   * API Reference</a></p>
   */
  class FileMetadata
  {
  public:
    AWS_CODECOMMIT_API FileMetadata();
    AWS_CODECOMMIT_API FileMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline FileMetadata& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline FileMetadata& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}

    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline FileMetadata& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}


    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline FileMetadata& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline FileMetadata& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline FileMetadata& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline FileMetadata& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline FileMetadata& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}

  private:

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
